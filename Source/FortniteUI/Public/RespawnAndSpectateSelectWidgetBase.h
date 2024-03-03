#pragma once
#include "CoreMinimal.h"
#include "AthenaHUDPrimaryContentInterface.h"
#include "FortActivatablePanelLTM.h"
#include "RespawnAndSpectateSelectWidgetBase.generated.h"

class AFortAthenaMutator_RespawnAndSpectateSelect;
class UCommonButton;
class URespawnAndSpectateSelectButtonWidgetBase;
class URichTextBlock;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class URespawnAndSpectateSelectWidgetBase : public UFortActivatablePanelLTM, public IAthenaHUDPrimaryContentInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortAthenaMutator_RespawnAndSpectateSelect* CachedMutator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<URespawnAndSpectateSelectButtonWidgetBase*> SelectButtonWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText HeaderText_Preview;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText HeaderText_Selectable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText HeaderText_NoOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DescriptionText_Preview;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DescriptionText_Selectable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DescriptionText_NoOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* ConfirmButton;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URichTextBlock* TextHeader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URichTextBlock* TextDescription;
    
public:
    URespawnAndSpectateSelectWidgetBase();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartClosingWidget();
    
    UFUNCTION(BlueprintCallable)
    void OnSelectionMade(URespawnAndSpectateSelectButtonWidgetBase* Widget);
    
    UFUNCTION(BlueprintCallable)
    void OnSelectionHovered(URespawnAndSpectateSelectButtonWidgetBase* Widget);
    
    UFUNCTION(BlueprintCallable)
    void OnSelectionConfirmed();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRespawnBecameAvailable();
    
    UFUNCTION(BlueprintCallable)
    void OnLocalPlayerRespawned();
    
    UFUNCTION(BlueprintCallable)
    void OnAvailableOptionsChanged();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UWidget* NativeGetDesiredFocusTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentlyHoveredButtonIndex() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

