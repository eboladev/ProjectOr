#include	<SFML/Graphics.hpp>
#include	<stdlib.h>

int		main(void)
{
  sf::RenderWindow app(sf::VideoMode(800, 600, 32), "FENEEEETRE");

  // Boucle principale
  while (app.IsOpened())
    {
      sf::Event event;
 
      while (app.GetEvent(event))
        {
	  if (event.Type == sf::Event::Closed)
	    app.Close();
        }
 
      // Remplissage de l'écran (couleur noire par défaut)
      app.Clear();
 
      // Affichage de la fenêtre à l'écran
      app.Display();

      return EXIT_SUCCESS;
    }
}
