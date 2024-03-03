#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerStart.h"
#include "FortTeamActorInterface.h"
#include "FortPvPPlayerStart.generated.h"

UCLASS(Blueprintable)
class AFortPvPPlayerStart : public APlayerStart, public IFortTeamActorInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Team;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDynamicStartLocation: 1;
    
public:
    AFortPvPPlayerStart();
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION()
    uint8 GetTeam() const override PURE_VIRTUAL(GetTeam, return 0;);
    
};

