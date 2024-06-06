#include "FortNavigationActor_MapTable.h"
#include "Components/StaticMeshComponent.h"


void AFortNavigationActor_MapTable::HandleActiveEventsChanged(const TArray<FString>& ActiveEventFlags) {
}

AFortNavigationActor_MapTable::AFortNavigationActor_MapTable() {
    ApolloMap = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ApolloMap"));
    ReferencePlane = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ReferencePlane"));
}

