#pragma once
#include "CoreMinimal.h"
#include "FortActivatablePanel.h"
#include "FortFeedbackDropdownCategoryHotfix_Add.h"
#include "FortFeedbackDropdownCategoryHotfix_Modify.h"
#include "Templates/SubclassOf.h"
#include "FortPlayerFeedbackModal.generated.h"

class UCommonButton;
class UCommonButtonGroup;
class UCommonTextBlock;
class UDynamicEntryBox;
class UFortPlayerFeedbackModalSubscreenBase;
class UFortPlayerFeedbackModalSubscreen_CategoryDisplay;
class UFortPlayerFeedbackModalSubscreen_EpicQA;
class UFortPlayerFeedbackModalSubscreen_FreeText;
class UFortPlayerFeedbackModalSubscreen_PlayerSelect;
class UFortPlayerFeedbackModalSubscreen_Screenshot;
class UFortPlayerFeedbackModalSubscreen_SubmitScreen;
class UScrollBox;

UCLASS(Abstract, Blueprintable, EditInlineNew, Config=Game)
class UFortPlayerFeedbackModal : public UFortActivatablePanel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCommonButtonGroup* CategoryTabs;
    
    UPROPERTY(EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<UFortPlayerFeedbackModalSubscreenBase>> DisplayedSubScreenStack;
    
    UPROPERTY(EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<UFortPlayerFeedbackModalSubscreenBase>> SubScreenToDisplayQueue;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortFeedbackDropdownCategoryHotfix_Add> PlayerFeedbackCategoriesToAdd;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortFeedbackDropdownCategoryHotfix_Modify> PlayerFeedbackCategoriesToModify;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortPlayerFeedbackModalSubscreen_CategoryDisplay> Subscreen_CategoryDisplay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortPlayerFeedbackModalSubscreen_PlayerSelect> Subscreen_PlayerSelect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortPlayerFeedbackModalSubscreen_SubmitScreen> Subscreen_SubmitDisplay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortPlayerFeedbackModalSubscreen_FreeText> Subscreen_FreeText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortPlayerFeedbackModalSubscreen_EpicQA> Subscreen_EpicQA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortPlayerFeedbackModalSubscreen_Screenshot> Subscreen_Screenshot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDynamicEntryBox* SubscreenTabs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* SubscreenContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_ModalTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_Close;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* CloseButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_NewFeedbackReport;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_Back;
    
public:
    UFortPlayerFeedbackModal();
};

