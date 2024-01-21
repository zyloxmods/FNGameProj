#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FortGameUIExtenderAthena.generated.h"

class APlayerController;

UCLASS(Abstract, Blueprintable)
class FORTNITEGAME_API UFortGameUIExtenderAthena : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerController* Owner;
    
public:
    UFortGameUIExtenderAthena();
    UFUNCTION(BlueprintCallable)
    void GoToBossCommand();
    
    UFUNCTION(BlueprintCallable)
    bool CanShowGoToBossCommand();
    
};

