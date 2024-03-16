#include <stdio.h>

int main() {
    int quantity;
    float unitPrice = 5.0;
    float totalPrice;

    printf("Enter the quantity: ");
    scanf("%d", &quantity);

    if (quantity <= 0) {
        printf("Invalid quantity entered.\n");
    }
	else if (quantity <= 30) {
        totalPrice = quantity * unitPrice;
		totalPrice = quantity * unitPrice * 0.9; // 10% discount
     }
	else if (quantity <= 50) {
      totalPrice = quantity * unitPrice;
      totalPrice = quantity * unitPrice * 0.85; // 15% discount
     }
    else
	{
     printf("Enter valid quantity");
	}
      printf("Total price: Rs %.2f\n", totalPrice);

    return 0;
}

