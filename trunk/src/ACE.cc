/**
 * @mainpage ACE gestionale Circolo Tennis.
 * Programma per la gestione di Circoli Tennis.
 * Permette la gestione dei campi, dei tornei, dei corsi.
 *
 * Richede le librerie GTK+-3.0 e Glib-2.0 per essere eseguito
 * Di seguito link al sito ufficiale delle librerie
 *
 * http://www.gtk.org/
 * 
 *
 * @author Filippo Muzzini
 */

/**
 * @file
 * File contenente la funzione ::main
 */

#include <iostream>
using namespace std;
#include "struttura_dati.h"
#include "file_IO.h"
#include "accesso_dati.h"
#include <gtk/gtk.h>

#ifdef DEBUG_MODE
	unsigned char MASK = 1|2;
#endif

/* Definizioni costanti del modulo */

const char INTERFACCIA[] = "interfaccia/interfaccia.glade";

/* Fine definizioni costanti */

GtkBuilder *build;
circolo_t *circolo;

/** Funzione principale.
 * Carica e inizializza i vari componenti del programma e lancia l'interfaccia grafica
 */
int main(int argc, char *argv[])
{
	gtk_init(&argc, &argv);
	build = gtk_builder_new();
	gtk_builder_add_from_file(build, INTERFACCIA, NULL);
	gtk_builder_connect_signals(build, NULL);

	gtk_main();	
}
