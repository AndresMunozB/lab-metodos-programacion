#include "matrix.h"
/*
1) Todas las macros y constantes en mayúsculas: MAX_BUFFER_SIZE, TRACKING_ID_PREFIX.
2) Struct nombres y typedef's en camelcase: GtkWidget, TrackingOrder.
3) Funciones que operan en estructuras: estilo C clásico: gtk_widget_show(), tracking_order_process().
4) Punteros: nada de lujos aquí:  GtkWidget *foo, TrackingOrder *bar.
5) Variables globales: simplemente no utilice variables globales. Son malvados
6) Funciones que están ahí, pero que no deben ser llamadas directamente, o tienen usos oscuros, o lo que sea: uno o más subrayan al principio:  _refrobnicate_data_tables(), _destroy_cache()
*/
int main(){
    Matrix* p_matrix = create_matrix(10,10);
    show_matrix(p_matrix);
    destroy_matrix(p_matrix);
    //show_matrix(p_matrix);
    return 0;
}