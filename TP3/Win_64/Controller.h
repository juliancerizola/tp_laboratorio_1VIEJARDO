//////////////////////////////////////////////////////////////
int controller_loadFromText(char* path , LinkedList* pArrayListEmployee);
int controller_loadFromBinary(char* path , LinkedList* pArrayListEmployee);
//////////////////////////////////////////////////////////////
int controller_addEmployee(LinkedList* pArrayListEmployee);
int controller_editEmployee(LinkedList* pArrayListEmployee);
int controller_removeEmployee(LinkedList* pArrayListEmployee);
//////////////////////////////////////////////////////////////
int controller_listEmployee(LinkedList* pArrayListEmployee);
int controller_printEmployee(LinkedList* pArrayListEmployee, int i);
int controller_sortEmployee(LinkedList* pArrayListEmployee);
//////////////////////////////////////////////////////////////
int controller_saveAsText(char* path , LinkedList* pArrayListEmployee);
int controller_saveAsBinary(char* path , LinkedList* pArrayListEmployee);
//////////////////////////////////////////////////////////////
int controller_getLastId(LinkedList* pArrayListEmployee);
