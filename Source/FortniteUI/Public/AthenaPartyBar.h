#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "AthenaPartyBar.generated.h"

class UDynamicEntryBox;
class UFortVoiceChannelToggleButton;

UCLASS(Blueprintable, EditInlineNew)
class UAthenaPartyBar : public UCommonUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDynamicEntryBox* EntryBox_PartyMembers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortVoiceChannelToggleButton* Button_ToggleChannel;
    
public:
    UAthenaPartyBar();
};

