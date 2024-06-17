void display7SEG(int count){
	switch(count){
	case 0:
			HAL_GPIO_WritePin(GPIOB,GPIO_PIN_0,SET); //g
			HAL_GPIO_WritePin(GPIOB,GPIO_PIN_1,RESET); //f
			HAL_GPIO_WritePin(GPIOB,GPIO_PIN_2,RESET);//e
			HAL_GPIO_WritePin(GPIOB,GPIO_PIN_3,RESET);//d
			HAL_GPIO_WritePin(GPIOB,GPIO_PIN_4,RESET); //c
			HAL_GPIO_WritePin(GPIOB,GPIO_PIN_5,RESET); //b
			HAL_GPIO_WritePin(GPIOB,GPIO_PIN_6,RESET); //a
			break;
	case 1:
		HAL_GPIO_WritePin(GPIOB,GPIO_PIN_0,SET);
		HAL_GPIO_WritePin(GPIOB,GPIO_PIN_1,SET);
		HAL_GPIO_WritePin(GPIOB,GPIO_PIN_2,SET);
		HAL_GPIO_WritePin(GPIOB,GPIO_PIN_3,SET);
		HAL_GPIO_WritePin(GPIOB,GPIO_PIN_4,RESET);
		HAL_GPIO_WritePin(GPIOB,GPIO_PIN_5,RESET);
		HAL_GPIO_WritePin(GPIOB,GPIO_PIN_6,SET);
			break;
	case 2:
		HAL_GPIO_WritePin(GPIOB,GPIO_PIN_0,RESET);
		HAL_GPIO_WritePin(GPIOB,GPIO_PIN_1,SET);
		HAL_GPIO_WritePin(GPIOB,GPIO_PIN_2,RESET);
		HAL_GPIO_WritePin(GPIOB,GPIO_PIN_3,RESET);
		HAL_GPIO_WritePin(GPIOB,GPIO_PIN_4,SET);
		HAL_GPIO_WritePin(GPIOB,GPIO_PIN_5,RESET);
		HAL_GPIO_WritePin(GPIOB,GPIO_PIN_6,RESET);
			break;
	case 3:
		HAL_GPIO_WritePin(GPIOB,GPIO_PIN_0,RESET);
		HAL_GPIO_WritePin(GPIOB,GPIO_PIN_1,SET);
		HAL_GPIO_WritePin(GPIOB,GPIO_PIN_2,SET);
		HAL_GPIO_WritePin(GPIOB,GPIO_PIN_3,RESET);
		HAL_GPIO_WritePin(GPIOB,GPIO_PIN_4,RESET);
		HAL_GPIO_WritePin(GPIOB,GPIO_PIN_5,RESET);
		HAL_GPIO_WritePin(GPIOB,GPIO_PIN_6,RESET);
			break;
	case 4:
		HAL_GPIO_WritePin(GPIOB,GPIO_PIN_0,RESET);
		HAL_GPIO_WritePin(GPIOB,GPIO_PIN_1,RESET);
		HAL_GPIO_WritePin(GPIOB,GPIO_PIN_2,SET);
		HAL_GPIO_WritePin(GPIOB,GPIO_PIN_3,SET);
		HAL_GPIO_WritePin(GPIOB,GPIO_PIN_4,RESET);
		HAL_GPIO_WritePin(GPIOB,GPIO_PIN_5,RESET);
		HAL_GPIO_WritePin(GPIOB,GPIO_PIN_6,SET);
			break;
	case 5:
		HAL_GPIO_WritePin(GPIOB,GPIO_PIN_0,RESET);
		HAL_GPIO_WritePin(GPIOB,GPIO_PIN_1,RESET);
		HAL_GPIO_WritePin(GPIOB,GPIO_PIN_2,SET);
		HAL_GPIO_WritePin(GPIOB,GPIO_PIN_3,RESET);
		HAL_GPIO_WritePin(GPIOB,GPIO_PIN_4,RESET);
		HAL_GPIO_WritePin(GPIOB,GPIO_PIN_5,SET);
		HAL_GPIO_WritePin(GPIOB,GPIO_PIN_6,RESET);
			break;
	case 6:
		HAL_GPIO_WritePin(GPIOB,GPIO_PIN_0,RESET);
		HAL_GPIO_WritePin(GPIOB,GPIO_PIN_1,RESET);
		HAL_GPIO_WritePin(GPIOB,GPIO_PIN_2,RESET);
		HAL_GPIO_WritePin(GPIOB,GPIO_PIN_3,RESET);
		HAL_GPIO_WritePin(GPIOB,GPIO_PIN_4,RESET);
		HAL_GPIO_WritePin(GPIOB,GPIO_PIN_5,SET);
		HAL_GPIO_WritePin(GPIOB,GPIO_PIN_6,RESET);
		break;
	case 7:
		HAL_GPIO_WritePin(GPIOB,GPIO_PIN_0,SET);
		HAL_GPIO_WritePin(GPIOB,GPIO_PIN_1,SET);
		HAL_GPIO_WritePin(GPIOB,GPIO_PIN_2,SET);
		HAL_GPIO_WritePin(GPIOB,GPIO_PIN_3,SET);
		HAL_GPIO_WritePin(GPIOB,GPIO_PIN_4,RESET);
		HAL_GPIO_WritePin(GPIOB,GPIO_PIN_5,RESET);
		HAL_GPIO_WritePin(GPIOB,GPIO_PIN_6,RESET);
			break;
	case 8:
		HAL_GPIO_WritePin(GPIOB,GPIO_PIN_0,RESET);
		HAL_GPIO_WritePin(GPIOB,GPIO_PIN_1,RESET);
		HAL_GPIO_WritePin(GPIOB,GPIO_PIN_2,RESET);
		HAL_GPIO_WritePin(GPIOB,GPIO_PIN_3,RESET);
		HAL_GPIO_WritePin(GPIOB,GPIO_PIN_4,RESET);
		HAL_GPIO_WritePin(GPIOB,GPIO_PIN_5,RESET);
		HAL_GPIO_WritePin(GPIOB,GPIO_PIN_6,RESET);
			break;
	case 9:
		HAL_GPIO_WritePin(GPIOB,GPIO_PIN_0,RESET);
		HAL_GPIO_WritePin(GPIOB,GPIO_PIN_1,RESET);
		HAL_GPIO_WritePin(GPIOB,GPIO_PIN_2,SET);
		HAL_GPIO_WritePin(GPIOB,GPIO_PIN_3,RESET);
		HAL_GPIO_WritePin(GPIOB,GPIO_PIN_4,RESET);
		HAL_GPIO_WritePin(GPIOB,GPIO_PIN_5,RESET);
		HAL_GPIO_WritePin(GPIOB,GPIO_PIN_6,RESET);
			break;
	}
}
void display7SEG_2(int count){
	switch(count){
		case 0:
				HAL_GPIO_WritePin(GPIOB,GPIO_PIN_7,SET); //g
				HAL_GPIO_WritePin(GPIOB,GPIO_PIN_8,RESET); //f
				HAL_GPIO_WritePin(GPIOB,GPIO_PIN_9,RESET);//e
				HAL_GPIO_WritePin(GPIOB,GPIO_PIN_10,RESET);//d
				HAL_GPIO_WritePin(GPIOB,GPIO_PIN_11,RESET); //c
				HAL_GPIO_WritePin(GPIOB,GPIO_PIN_12,RESET); //b
				HAL_GPIO_WritePin(GPIOB,GPIO_PIN_13,RESET); //a
				break;
		case 1:
			HAL_GPIO_WritePin(GPIOB,GPIO_PIN_7,SET);
			HAL_GPIO_WritePin(GPIOB,GPIO_PIN_8,SET);
			HAL_GPIO_WritePin(GPIOB,GPIO_PIN_9,SET);
			HAL_GPIO_WritePin(GPIOB,GPIO_PIN_10,SET);
			HAL_GPIO_WritePin(GPIOB,GPIO_PIN_11,RESET);
			HAL_GPIO_WritePin(GPIOB,GPIO_PIN_12,RESET);
			HAL_GPIO_WritePin(GPIOB,GPIO_PIN_13,SET);
				break;
		case 2:
			HAL_GPIO_WritePin(GPIOB,GPIO_PIN_7,RESET);
			HAL_GPIO_WritePin(GPIOB,GPIO_PIN_8,SET);
			HAL_GPIO_WritePin(GPIOB,GPIO_PIN_9,RESET);
			HAL_GPIO_WritePin(GPIOB,GPIO_PIN_10,RESET);
			HAL_GPIO_WritePin(GPIOB,GPIO_PIN_11,SET);
			HAL_GPIO_WritePin(GPIOB,GPIO_PIN_12,RESET);
			HAL_GPIO_WritePin(GPIOB,GPIO_PIN_13,RESET);
				break;
		case 3:
			HAL_GPIO_WritePin(GPIOB,GPIO_PIN_7,RESET);
			HAL_GPIO_WritePin(GPIOB,GPIO_PIN_8,SET);
			HAL_GPIO_WritePin(GPIOB,GPIO_PIN_9,SET);
			HAL_GPIO_WritePin(GPIOB,GPIO_PIN_10,RESET);
			HAL_GPIO_WritePin(GPIOB,GPIO_PIN_11,RESET);
			HAL_GPIO_WritePin(GPIOB,GPIO_PIN_12,RESET);
			HAL_GPIO_WritePin(GPIOB,GPIO_PIN_13,RESET);
				break;
		case 4:
			HAL_GPIO_WritePin(GPIOB,GPIO_PIN_7,RESET);
			HAL_GPIO_WritePin(GPIOB,GPIO_PIN_8,RESET);
			HAL_GPIO_WritePin(GPIOB,GPIO_PIN_9,SET);
			HAL_GPIO_WritePin(GPIOB,GPIO_PIN_10,SET);
			HAL_GPIO_WritePin(GPIOB,GPIO_PIN_11,RESET);
			HAL_GPIO_WritePin(GPIOB,GPIO_PIN_12,RESET);
			HAL_GPIO_WritePin(GPIOB,GPIO_PIN_13,SET);
				break;
		case 5:
			HAL_GPIO_WritePin(GPIOB,GPIO_PIN_7,RESET);
			HAL_GPIO_WritePin(GPIOB,GPIO_PIN_8,RESET);
			HAL_GPIO_WritePin(GPIOB,GPIO_PIN_9,SET);
			HAL_GPIO_WritePin(GPIOB,GPIO_PIN_10,RESET);
			HAL_GPIO_WritePin(GPIOB,GPIO_PIN_11,RESET);
			HAL_GPIO_WritePin(GPIOB,GPIO_PIN_12,SET);
			HAL_GPIO_WritePin(GPIOB,GPIO_PIN_13,RESET);
				break;
		case 6:
			HAL_GPIO_WritePin(GPIOB,GPIO_PIN_7,RESET);
			HAL_GPIO_WritePin(GPIOB,GPIO_PIN_8,RESET);
			HAL_GPIO_WritePin(GPIOB,GPIO_PIN_9,RESET);
			HAL_GPIO_WritePin(GPIOB,GPIO_PIN_10,RESET);
			HAL_GPIO_WritePin(GPIOB,GPIO_PIN_11,RESET);
			HAL_GPIO_WritePin(GPIOB,GPIO_PIN_12,SET);
			HAL_GPIO_WritePin(GPIOB,GPIO_PIN_13,RESET);
			break;
		case 7:
			HAL_GPIO_WritePin(GPIOB,GPIO_PIN_7,SET);
			HAL_GPIO_WritePin(GPIOB,GPIO_PIN_8,SET);
			HAL_GPIO_WritePin(GPIOB,GPIO_PIN_9,SET);
			HAL_GPIO_WritePin(GPIOB,GPIO_PIN_10,SET);
			HAL_GPIO_WritePin(GPIOB,GPIO_PIN_11,RESET);
			HAL_GPIO_WritePin(GPIOB,GPIO_PIN_12,RESET);
			HAL_GPIO_WritePin(GPIOB,GPIO_PIN_13,RESET);
				break;
		case 8:
			HAL_GPIO_WritePin(GPIOB,GPIO_PIN_7,RESET);
			HAL_GPIO_WritePin(GPIOB,GPIO_PIN_8,RESET);
			HAL_GPIO_WritePin(GPIOB,GPIO_PIN_9,RESET);
			HAL_GPIO_WritePin(GPIOB,GPIO_PIN_10,RESET);
			HAL_GPIO_WritePin(GPIOB,GPIO_PIN_11,RESET);
			HAL_GPIO_WritePin(GPIOB,GPIO_PIN_12,RESET);
			HAL_GPIO_WritePin(GPIOB,GPIO_PIN_13,RESET);
				break;
		case 9:
			HAL_GPIO_WritePin(GPIOB,GPIO_PIN_7,RESET);
			HAL_GPIO_WritePin(GPIOB,GPIO_PIN_8,RESET);
			HAL_GPIO_WritePin(GPIOB,GPIO_PIN_9,SET);
			HAL_GPIO_WritePin(GPIOB,GPIO_PIN_10,RESET);
			HAL_GPIO_WritePin(GPIOB,GPIO_PIN_11,RESET);
			HAL_GPIO_WritePin(GPIOB,GPIO_PIN_12,RESET);
			HAL_GPIO_WritePin(GPIOB,GPIO_PIN_13,RESET);
				break;
		}
}
void DISPLAY(int state){
	switch(state){
	case 0:
		HAL_GPIO_WritePin(GPIOA,GPIO_PIN_5,SET);
		HAL_GPIO_WritePin(GPIOA,GPIO_PIN_6,RESET);
		HAL_GPIO_WritePin(GPIOA,GPIO_PIN_7,RESET);
		break;
	case 1:
		HAL_GPIO_WritePin(GPIOA,GPIO_PIN_5,RESET);
		HAL_GPIO_WritePin(GPIOA,GPIO_PIN_6,SET);
		HAL_GPIO_WritePin(GPIOA,GPIO_PIN_7,RESET);
		break;
	case 2:
		HAL_GPIO_WritePin(GPIOA,GPIO_PIN_5,RESET);
		HAL_GPIO_WritePin(GPIOA,GPIO_PIN_6,RESET);
		HAL_GPIO_WritePin(GPIOA,GPIO_PIN_7,SET);
		break;
	}
}
void DISPLAY_2(int state){
	switch(state){
		case 0:
			HAL_GPIO_WritePin(GPIOA,GPIO_PIN_11,SET);
			HAL_GPIO_WritePin(GPIOA,GPIO_PIN_12,RESET);
			HAL_GPIO_WritePin(GPIOA,GPIO_PIN_13,RESET);
			break;
		case 1:
			HAL_GPIO_WritePin(GPIOA,GPIO_PIN_11,RESET);
			HAL_GPIO_WritePin(GPIOA,GPIO_PIN_12,SET);
			HAL_GPIO_WritePin(GPIOA,GPIO_PIN_13,RESET);
			break;
		case 2:
			HAL_GPIO_WritePin(GPIOA,GPIO_PIN_11,RESET);
			HAL_GPIO_WritePin(GPIOA,GPIO_PIN_12,RESET);
			HAL_GPIO_WritePin(GPIOA,GPIO_PIN_13,SET);
			break;
		}
}
enum {RED,YELLOW,GREEN};
int main(void)
{

  /* USER CODE BEGIN 1 */

  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  MX_USART1_UART_Init();
  /* USER CODE BEGIN 2 */

  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  int CountSecondOfGroup1 = 5;
  int StateOfGroup1= RED;
  int CountSecondOfGroup2 = 3;
  int StateOfGroup2= GREEN;

  while (1)
  {
    /* USER CODE END WHILE */
	DISPLAY(StateOfGroup1);
	DISPLAY_2(StateOfGroup2);
	display7SEG(CountSecondOfGroup1);
	display7SEG_2(CountSecondOfGroup2);
	CountSecondOfGroup1--;
	CountSecondOfGroup2--;
	if(CountSecondOfGroup1 == 0){
		if(StateOfGroup1 == RED){
			StateOfGroup1 = GREEN;
			CountSecondOfGroup1 = 3;
		}
		else if(StateOfGroup1 == YELLOW){
			StateOfGroup1 = RED;
			CountSecondOfGroup1 = 5;
		}
		else{
			StateOfGroup1 = YELLOW;
			CountSecondOfGroup1 = 2;
		}
	}
	if(CountSecondOfGroup2 == 0){
		if(StateOfGroup2 == RED){
					StateOfGroup2 = GREEN;
					CountSecondOfGroup2 = 3;
		}
		else if(StateOfGroup2 == YELLOW){
					StateOfGroup2 = RED;
					CountSecondOfGroup2 = 5;
		}
		else{
					StateOfGroup2 = YELLOW;
					CountSecondOfGroup2 = 2;
		}
	}

	HAL_Delay(1000);
    /* USER CODE BEGIN 3 */
  }
  /* USER CODE END 3 */
}
