#pragma once
#include "CoreMinimal.h"
#include "EAthenaGamePhase.h"
#include "Blueprint/UserWidget.h"
#include "ApolloIntroShimBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UApolloIntroShimBase : public UUserWidget {
    GENERATED_BODY()
public:
    UApolloIntroShimBase();
private:
    UFUNCTION(BlueprintCallable)
    void HandleGamePhaseChanged(EAthenaGamePhase GamePhase);
    
};

