#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CosmeticPreviewInterface.h"
#include "BattleBusCosmeticInstanceBase.generated.h"

class UAthenaBattleBusItemDefinition;

UCLASS(Blueprintable)
class ABattleBusCosmeticInstanceBase : public AActor, public ICosmeticPreviewInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAthenaBattleBusItemDefinition* ActiveSkin;
    
    ABattleBusCosmeticInstanceBase();
    
    // Fix for true pure virtual functions not being implemented
};

