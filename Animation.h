#pragma once

namespace knapsack {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Summary for Base
	/// </summary>
	public ref class Animation : public System::Windows::Forms::Form
	{
	public:
		Animation(Panel^ productPanel, Panel^ bottomPanel)
			: productPanel(productPanel), bottomPanel(bottomPanel)
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Animation()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		// Member variables to hold references to productPanel and bottomPanel
		Panel^ productPanel;
		Panel^ bottomPanel;
	private: System::ComponentModel::IContainer^ components;

	public: System::Windows::Forms::Timer^ drop_timer;

		  void InitializeComponent() {
			  this->components = (gcnew System::ComponentModel::Container());
			  this->drop_timer = (gcnew System::Windows::Forms::Timer(this->components));


			  // drop_timer
			  this->drop_timer->Tick += gcnew System::EventHandler(this, &Animation::drop_timer_Tick);

		  }

	public:
		System::Void drop_timer_Tick(System::Object^ sender, System::EventArgs^ e) {


			Panel^ productPanel = dynamic_cast<Panel^>(drop_timer->Tag);
			if (productPanel == nullptr) {
				// Handle the case where the product panel is null
				return;
			}
			// Update the position of productPanel gradually
			static int productPanel_Y = productPanel->Location.Y;
			const int speed = 5; // Adjust the speed of animation

			// Get the bounds of productPanel and bottomPanel
			Rectangle productPanelBounds = productPanel->Bounds;
			Rectangle bottomPanelBounds = bottomPanel->Bounds;

			// Offset the bounds of productPanel by its current location
			productPanelBounds.Offset(productPanel->Location);
			bottomPanelBounds.Offset(bottomPanel->Location);

			// Check if productPanel is touching the upper edge of bottomPanel
			if (productPanelBounds.IntersectsWith(bottomPanelBounds) && productPanel->Top <= bottomPanel->Top) {
				// Stop the timer when productPanel touches the upper edge of bottomPanel
				drop_timer->Stop();
			}
			else {
				// Move productPanel downward
				if (productPanel_Y < bottomPanel->Top) {
					productPanel_Y += speed;
					productPanel->Location = System::Drawing::Point(productPanel->Location.X, productPanel_Y);
				}
				else {
					// Stop the timer when productPanel reaches the bottom
					drop_timer->Stop();
				}
			}
		}

	};
}
