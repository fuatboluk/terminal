/* Author: Fuat Bölük <fuat@fuxproject.org> */


/* Open */
static gboolean open(GtkWidget *terminal, gpointer user_data)
{
    char cmd[1000];
    strcpy(cmd, "terminal");
    system(cmd);
    return TRUE;
}


/* Copy */
static gboolean copy(GtkWidget *terminal, gpointer cmd)
{
    vte_terminal_copy_clipboard(VTE_TERMINAL(terminal));
    return TRUE;
}


/* Paste */
static gboolean paste(GtkWidget *terminal, gpointer cmd)
{
    vte_terminal_paste_clipboard(VTE_TERMINAL(terminal));
    return TRUE;
}


/* Clear */
static gboolean clear(GtkWidget *terminal, gpointer user_data)
{
    char cmd[1000];
    strcpy(cmd, " clear \n");
    vte_terminal_feed_child(VTE_TERMINAL(terminal), cmd, strlen(cmd));
    return TRUE;
}


/* History */
static gboolean history(GtkWidget *terminal, gpointer user_data)
{
    char cmd[1000];
    strcpy(cmd, " history \n");
    vte_terminal_feed_child(VTE_TERMINAL(terminal), cmd, strlen(cmd));
    return TRUE;
}