#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateBrush.h"
#include "ActionTextPair.h"
#include "FortClientAnnouncement.h"
#include "FortClientAnnouncementData_Keybinding.h"
#include "FortClientAnnouncement_Keybinding.generated.h"

UCLASS(Blueprintable)
class AFortClientAnnouncement_Keybinding : public AFortClientAnnouncement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_KeybindingData, meta=(AllowPrivateAccess=true))
    FFortClientAnnouncementData_Keybinding KeybindingData;
    
    AFortClientAnnouncement_Keybinding();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetTitleText(FText TitleText);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetIcon(FSlateBrush& Icon);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetDisplayTime(float DisplayTime);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetDetailText(FText DetailText);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ResetGamepadActionTextPairList();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_KeybindingData(const FFortClientAnnouncementData_Keybinding& PreviousKeybindingData);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void AddGamepadActionTextPair(FActionTextPair Pair);
    
};

