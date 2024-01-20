#pragma once
#include "CoreMinimal.h"
#include "AthenaChallengeScreenTileBase.h"
#include "AthenaChallengeScreenTile_Daily.generated.h"

class UDynamicEntryBox;
class UImage;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaChallengeScreenTile_Daily : public UAthenaChallengeScreenTileBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_PartyAssist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDynamicEntryBox* EntryBox_MinimalInfoDailies;
    
public:
    UAthenaChallengeScreenTile_Daily();
};

