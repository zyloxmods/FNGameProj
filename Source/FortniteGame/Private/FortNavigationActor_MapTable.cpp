#include "FortNavigationActor_MapTable.h"
#include "Components/StaticMeshComponent.h"


void AFortNavigationActor_MapTable::HandleActiveEventsChanged(const TArray<FString>& ActiveEventFlags) {
}

AFortNavigationActor_MapTable::AFortNavigationActor_MapTable() {
    this->ApolloMap = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ApolloMap"));
    this->ReferencePlane = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ReferencePlane"));
}

