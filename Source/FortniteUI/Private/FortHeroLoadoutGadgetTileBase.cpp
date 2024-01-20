#include "FortHeroLoadoutGadgetTileBase.h"

void UFortHeroLoadoutGadgetTileBase::SetGadgetToRepresent(const UFortGadgetItemDefinition* GadgetItemDefinition) {
}


UFortHeroLoadoutGadgetTileBase::UFortHeroLoadoutGadgetTileBase() {
    this->Text_GadgetName = NULL;
    this->Image_Icon = NULL;
    this->RichText_Description = NULL;
    this->GadgetToRepresent = NULL;
}

