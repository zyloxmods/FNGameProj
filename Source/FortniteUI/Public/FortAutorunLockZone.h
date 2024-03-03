#pragma once
#include "CoreMinimal.h"
#include "BacchusHUDElement.h"
#include "FortAutorunLockZone.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UFortAutorunLockZone : public UBacchusHUDElement {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAutorunLockEnabled;
    
public:
    UFortAutorunLockZone();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInZoneChanged(bool bNewIsInZone);
    
};

