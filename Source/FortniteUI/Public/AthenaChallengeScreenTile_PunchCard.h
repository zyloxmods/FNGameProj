#pragma once
#include "CoreMinimal.h"
#include "AthenaChallengeScreenTileBase.h"
#include "AthenaChallengeScreenTile_PunchCard.generated.h"

class UAthenaPunchCard;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaChallengeScreenTile_PunchCard : public UAthenaChallengeScreenTileBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaPunchCard* PunchCard;
    
public:
    UAthenaChallengeScreenTile_PunchCard();
};

