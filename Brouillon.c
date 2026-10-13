

}
// N'oublie pas tes commentaires Javadoc ici !
typedef struct {
    char couleur_trait[20]; // ex: "black", "#FF0000"
    char couleur_fond[20];
    int deplacement_x;
    int deplacement_y;
    int angle_rotation;
    int inversion_x; // 1 pour inversé, 0 sinon
    int inversion_y;
} Style;

typedef struct {
    int x;
    int y;
} Point;
