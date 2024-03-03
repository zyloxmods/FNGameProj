#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "AthenaInGameChallengeInfoPanel.generated.h"

class UAthenaChallengeInfoPanel;
class UPanelWidget;

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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaChallengeInfoPanel* ChallengeInfo_Contextual;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaChallengeInfoPanel* ChallengeInfo_Selected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* Panel_NonSelectedChallenges;
    
public:
    UAthenaInGameChallengeInfoPanel();
};

