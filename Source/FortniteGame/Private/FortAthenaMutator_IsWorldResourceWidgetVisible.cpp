#include "FortAthenaMutator_IsWorldResourceWidgetVisible.h"
#include "Net/UnrealNetwork.h"

void AFortAthenaMutator_IsWorldResourceWidgetVisible::OnRep_bWoodResourceWidgetVisible() {
}

void AFortAthenaMutator_IsWorldResourceWidgetVisible::OnRep_bStoneResourceWidgetVisible() {
}

void AFortAthenaMutator_IsWorldResourceWidgetVisible::OnRep_bMetalResourceWidgetVisible() {
}

void AFortAthenaMutator_IsWorldResourceWidgetVisible::OnRep_bGoldCurrencyResourceWidgetVisible() {
}

void AFortAthenaMutator_IsWorldResourceWidgetVisible::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaMutator_IsWorldResourceWidgetVisible, bWoodResourceWidgetVisible);
    DOREPLIFETIME(AFortAthenaMutator_IsWorldResourceWidgetVisible, bStoneResourceWidgetVisible);
    DOREPLIFETIME(AFortAthenaMutator_IsWorldResourceWidgetVisible, bMetalResourceWidgetVisible);
    DOREPLIFETIME(AFortAthenaMutator_IsWorldResourceWidgetVisible, bGoldCurrencyResourceWidgetVisible);
}

AFortAthenaMutator_IsWorldResourceWidgetVisible::AFortAthenaMutator_IsWorldResourceWidgetVisible() {
    bWoodResourceWidgetVisible = true;
    bStoneResourceWidgetVisible = true;
    bMetalResourceWidgetVisible = true;
    bGoldCurrencyResourceWidgetVisible = false;
}

