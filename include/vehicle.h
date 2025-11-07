#ifndef VEHICLE_H
#define VEHICLE_H

// Constantes
#define SIZE_LICENSE_PLATE 8
#define SIZE_MODEL 20
#define SIZE_BRAND 20
#define SIZE_CATEGORY 15
#define SIZE_STATUS 16


// Estrutura para o tipo vehicle
typedef struct {
	char license_plate[SIZE_LICENSE_PLATE];
	char model[SIZE_MODEL];
	char brand[SIZE_BRAND];
	int year;
	char category[SIZE_CATEGORY];
	int mileage;
	char status[SIZE_STATUS];
} Vehicle;

#endif
