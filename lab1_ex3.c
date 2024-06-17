void display(int state){
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
  int count = 5;
  int state = 0; // RED
  while (1)
  {
    /* USER CODE END WHILE */
	display(state);
	display7SEG(count);
	count--;
	if(count==0){
		if(state == 0){
			count = 2;
		}
		else if(state == 1){
			count = 3;
		}
		else{
			count = 5;
		}
		state++;
	}
	state%=3;
	HAL_Delay(1000);
    /* USER CODE BEGIN 3 */
  }
  /* USER CODE END 3 */
}

/**
