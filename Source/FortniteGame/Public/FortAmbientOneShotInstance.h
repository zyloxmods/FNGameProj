#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FortAmbientOneShotInstance.generated.h"

UCLASS(Blueprintable)
class UFortAmbientOneShotInstance : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AssociatedTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bActive;
    
    UFortAmbientOneShotInstance();
    UFUNCTION(BlueprintCallable)
    void Reset();
    
    UFUNCTION(BlueprintCallable)
    void OnTrigger();
    
};

