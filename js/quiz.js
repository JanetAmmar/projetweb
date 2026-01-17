// Configuration du quiz
const quizConfig = {
  answers: {
    q1: 'b', // Hyper Text Markup Language
    q2: 'b', // Un langage de programmation
    q3: 'b', // Cascading Style Sheets
    q4: 'b', // FTP
    q5: 'a', // Structured Query Language
    q6: 'b', // Python
    q7: 'a', // Un système de protection réseau
    q8: 'a', // 80
    q9: 'b', // O(n log n)
    q10: 'a', // git branch
    q11: 'b', // 443
    q12: 'a', // Accéder et modifier les éléments HTML
    q13: 'a', // Un site qui s'adapte à tous les appareils
    q14: 'a', // React
    q15: 'b' // <a href="">
  },
  explanations: {
    q1: 'HTML signifie "Hyper Text Markup Language". C\'est le langage standard utilisé pour créer des pages web.',
    q2: 'JavaScript est un langage de programmation qui permet d\'ajouter de l\'interactivité aux pages web.',
    q3: 'CSS signifie "Cascading Style Sheets". Il est utilisé pour styliser les pages HTML.',
    q4: 'FTP (File Transfer Protocol) est le protocole utilisé pour transférer des fichiers sur Internet.',
    q5: 'SQL signifie "Structured Query Language". C\'est le langage standard pour gérer les bases de données relationnelles.',
    q6: 'Python est largement utilisé pour le développement backend, notamment avec des frameworks comme Django et Flask.',
    q7: 'Un firewall (pare-feu) est un système de sécurité réseau qui contrôle le trafic entrant et sortant.',
    q8: 'Le port 80 est le port par défaut pour HTTP (HyperText Transfer Protocol).',
    q9: 'Le tri rapide (Quick Sort) a une complexité temporelle moyenne de O(n log n).',
    q10: 'La commande "git branch" permet de créer une nouvelle branche dans Git.',
    q11: 'Le port 443 est le port par défaut pour HTTPS (HyperText Transfer Protocol Secure), qui est la version sécurisée de HTTP.',
    q12: 'Le DOM (Document Object Model) permet aux développeurs JavaScript d\'accéder et de modifier les éléments HTML d\'une page web.',
    q13: 'Le responsive design est une approche qui permet aux sites web de s\'adapter automatiquement à différentes tailles d\'écran et appareils.',
    q14: 'React est un framework JavaScript très populaire développé par Facebook pour construire des interfaces utilisateur dynamiques.',
    q15: 'La balise HTML <a> avec l\'attribut href est utilisée pour créer des liens hypertexte vers d\'autres pages web.'
  },
  correctAnswers: {
    q1: 'Hyper Text Markup Language',
    q2: 'Un langage de programmation',
    q3: 'Cascading Style Sheets',
    q4: 'FTP',
    q5: 'Structured Query Language',
    q6: 'Python',
    q7: 'Un système de protection réseau',
    q8: '80',
    q9: 'O(n log n)',
    q10: 'git branch',
    q11: '443',
    q12: 'Accéder et modifier les éléments HTML',
    q13: 'Un site qui s\'adapte à tous les appareils',
    q14: 'React',
    q15: '<a href="">'
  }
};

// Mise à jour de la barre de progression
function updateProgress() {
  const totalQuestions = Object.keys(quizConfig.answers).length;
  let answered = 0;
  
  for (let q in quizConfig.answers) {
    const selected = document.querySelector(`input[name="${q}"]:checked`);
    if (selected) {
      answered++;
    }
  }
  
  const progress = (answered / totalQuestions) * 100;
  document.getElementById('progressBar').style.width = progress + '%';
  document.getElementById('progressText').textContent = `${answered} / ${totalQuestions} questions`;
  
  // Activer le bouton de soumission si toutes les questions sont répondues
  const submitBtn = document.getElementById('submitQuiz');
  if (answered === totalQuestions) {
    submitBtn.disabled = false;
    submitBtn.classList.add('btn-ready');
  } else {
    submitBtn.disabled = true;
    submitBtn.classList.remove('btn-ready');
  }
}

// Ajouter les écouteurs d'événements pour chaque question
document.addEventListener('DOMContentLoaded', function() {
  const totalQuestions = Object.keys(quizConfig.answers).length;
  
  // Écouter les changements sur tous les inputs radio
  const radioInputs = document.querySelectorAll('input[type="radio"]');
  radioInputs.forEach(input => {
    input.addEventListener('change', updateProgress);
  });
  
  // Initialiser la barre de progression
  updateProgress();
  
  // Gestion de la soumission du quiz
  document.getElementById('submitQuiz').addEventListener('click', function() {
    let score = 0;
    const total = Object.keys(quizConfig.answers).length;
    let corrections = "";
    
    for (let q in quizConfig.answers) {
      const selected = document.querySelector(`input[name="${q}"]:checked`);
      const questionCard = document.querySelector(`.question-card[data-question="${q.slice(1)}"]`);
      
      if (selected && selected.value === quizConfig.answers[q]) {
        score++;
        questionCard.classList.add('correct');
        corrections += `
          <div class="correction-item correct">
            <div class="correction-header">
              <span class="correction-icon">✅</span>
              <strong>Question ${q.slice(1)} : Correct</strong>
            </div>
            <p class="correction-explanation">${quizConfig.explanations[q]}</p>
          </div>
        `;
      } else {
        questionCard.classList.add('incorrect');
        const correctAnswer = quizConfig.correctAnswers[q];
        corrections += `
          <div class="correction-item incorrect">
            <div class="correction-header">
              <span class="correction-icon">❌</span>
              <strong>Question ${q.slice(1)} : Incorrect</strong>
            </div>
            <p class="correction-answer">Réponse correcte : <strong>${correctAnswer}</strong></p>
            <p class="correction-explanation">${quizConfig.explanations[q]}</p>
          </div>
        `;
      }
    }
    
    // Afficher les résultats
    const percentage = Math.round((score / total) * 100);
    document.getElementById('scoreValue').textContent = score;
    document.getElementById('scorePercentage').textContent = percentage + '%';
    
    // Message personnalisé selon le score
    let message = '';
    if (percentage === 100) {
      message = '🎉 Excellent ! Vous avez obtenu un score parfait !';
    } else if (percentage >= 80) {
      message = '👏 Très bien ! Vous avez de bonnes connaissances !';
    } else if (percentage >= 60) {
      message = '👍 Pas mal ! Continuez à apprendre !';
    } else if (percentage >= 40) {
      message = '📚 Il y a encore du travail, mais vous êtes sur la bonne voie !';
    } else {
      message = '💪 Ne vous découragez pas, continuez à vous exercer !';
    }
    
    document.getElementById('scoreMessage').textContent = message;
    document.getElementById('corrections').innerHTML = corrections;
    
    // Afficher la section résultats
    document.getElementById('result').hidden = false;
    document.getElementById('submitQuiz').style.display = 'none';
    document.getElementById('resetQuiz').style.display = 'inline-block';
    
    // Scroll vers les résultats
    document.getElementById('result').scrollIntoView({behavior: "smooth"});
  });
  
  // Bouton pour recommencer
  document.getElementById('resetQuiz').addEventListener('click', function() {
    // Réinitialiser tous les inputs
    document.querySelectorAll('input[type="radio"]').forEach(input => {
      input.checked = false;
    });
    
    // Réinitialiser les classes des cartes
    document.querySelectorAll('.question-card').forEach(card => {
      card.classList.remove('correct', 'incorrect');
    });
    
    // Cacher les résultats
    document.getElementById('result').hidden = true;
    document.getElementById('submitQuiz').style.display = 'inline-block';
    document.getElementById('resetQuiz').style.display = 'none';
    
    // Réinitialiser la progression
    updateProgress();
    
    // Scroll vers le haut
    window.scrollTo({top: 0, behavior: 'smooth'});
  });
});
