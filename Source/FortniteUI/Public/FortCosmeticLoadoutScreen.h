#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EFortCosmeticLoadoutScreenMode.h"
#include "EFortLoadoutCardType.h"
#include "FortActivatablePanel.h"
#include "FortHUDShutdownTimerInterface.h"
#include "Templates/SubclassOf.h"
#include "FortCosmeticLoadoutScreen.generated.h"

class UAthenaConfirmationWindow;
class UCommonButton;
class UFortCosmeticLoadoutCard;
class UFortCosmeticLockerItem;
class UFortNameLoadoutPopup;
class UFortProgressModal;
class UObject;
class UTileView;

UCLASS(Blueprintable, EditInlineNew)
class UFortCosmeticLoadoutScreen : public UFortActivatablePanel, public IFortHUDShutdownTimerInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle BackAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortNameLoadoutPopup> NameLoadoutPopupClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortProgressModal> ProgressModalClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortProgressModal* ProgressModalInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortCosmeticLoadoutScreenMode ScreenMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAthenaConfirmationWindow> AthenaConfirmationClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText UnsavedPresetConfirmationTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText UnsavedPresetConfirmationDescriptionFormat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText UnsavedPresetConfirmationContinueButtonText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText UnsavedPresetConfirmationBackButtonText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObject* NewlySelectedItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortCosmeticLockerItem* PreviewedLocker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTileView* ListView_Loadouts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_MobileClose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_RenameLoadout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_DeleteLoadout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* SimpleFeatured_YellowButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortCosmeticLoadoutCard* Card_SelectedPreset;
    
public:
    UFortCosmeticLoadoutScreen();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPreviewTile(EFortLoadoutCardType CardType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFlavorForScreenMode(EFortCosmeticLoadoutScreenMode NewMode);
    
    
    // Fix for true pure virtual functions not being implemented
};

