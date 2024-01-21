#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "AthenaInGameChallengeInfoPanel.generated.h"

class UAthenaChallengeInfoPanel;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaInGameChallengeInfoPanel : public UCommonUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TotalMaxEntries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaChallengeInfoPanel* ChallengeInfo_PartyAssist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaChallengeInfoPanel* ChallengeInfo_Daily;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaChallengeInfoPanel* ChallengeInfo_Suggested;
    
public:
    UAthenaInGameChallengeInfoPanel();
};

