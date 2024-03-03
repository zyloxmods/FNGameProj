#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "FortAITetheringBoxBoundsInterface.generated.h"

UINTERFACE(Blueprintable)
class UFortAITetheringBoxBoundsInterface : public UInterface {
    GENERATED_BODY()
};

class IFortAITetheringBoxBoundsInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintImplementableEvent)
    float GetTetheredBoxBoundsWidth();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintImplementableEvent)
    float GetTetheredBoxBoundsHeight();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintImplementableEvent)
    float GetTetheredBoxBoundsEQSSpaceBetween();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintImplementableEvent)
    float GetTetheredBoxBoundsEQSGridSize();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintImplementableEvent)
    FVector GetTetheredBoxBoundsCenter();
    
};

