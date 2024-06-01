#include "MyForm.h"

using namespace SimpleCRUD;

[STAThreadAttribute]

int main() {

	Application::Run(gcnew MyForm());

	return 0;
}