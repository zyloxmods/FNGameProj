#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "FortVoiceChannelHeaderEntry.generated.h"

class UFortVoiceChannelHeaderButton;
class USocialUserListView;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortVoiceChannelHeaderEntry : public UCommonUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USocialUserListView* ListView_Users;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortVoiceChannelHeaderButton* Button_ActivateThisChannel;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Anim_Close;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Anim_Open;
    
public:
    UFortVoiceChannelHeaderEntry();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateVisuals(bool bIsActive);
    
};

