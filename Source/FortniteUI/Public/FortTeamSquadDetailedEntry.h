#pragma once
#include "CoreMinimal.h"
#include "AthenaTeamSquadEntry.h"
#include "FortTeamSquadDetailedEntry.generated.h"

class UCommonRichTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortTeamSquadDetailedEntry : public UAthenaTeamSquadEntry {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonRichTextBlock* RichText_SquadName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonRichTextBlock* RichText_LockReason;
    
public:
    UFortTeamSquadDetailedEntry();
};

