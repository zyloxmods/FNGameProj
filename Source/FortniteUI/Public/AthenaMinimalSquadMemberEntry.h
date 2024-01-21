#pragma once
#include "CoreMinimal.h"
#include "FortTeamMemberEntryBase.h"
#include "AthenaMinimalSquadMemberEntry.generated.h"

class UImage;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaMinimalSquadMemberEntry : public UFortTeamMemberEntryBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_ReadyIcon;
    
public:
    UAthenaMinimalSquadMemberEntry();
};

