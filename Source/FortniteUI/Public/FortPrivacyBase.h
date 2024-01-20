#pragma once
#include "CoreMinimal.h"
#include "Party/PartyTypes.h"
#include "FortActivatablePanel.h"
#include "FortPrivacyBase.generated.h"

class UCommonButton;
class UCommonButtonGroup;
class UPanelWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortPrivacyBase : public UFortActivatablePanel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* AllowFriendsOfFriendsButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* AllowFriendsOfFriendsContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCommonButtonGroup* ButtonGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UCommonButton*, EPartyType> PrivacyButtonMap;
    
public:
    UFortPrivacyBase();
private:
    UFUNCTION(BlueprintCallable)
    void HandlePrivacyButtonSelected(UCommonButton* SelectedPrivacyButton, int32 ButtonIndex);
    
public:
    UFUNCTION(BlueprintCallable)
    void ApplyPrivacySetting();
    
    UFUNCTION(BlueprintCallable)
    void AddPrivacyButton(UCommonButton* PrivacyButton, EPartyType PartyType);
    
};

