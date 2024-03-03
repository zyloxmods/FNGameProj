#pragma once
#include "CoreMinimal.h"
#include "CreativeOptionCategoryData.h"
#include "Blueprint/UserWidget.h"
#include "FortCreativeOptionsCategory.generated.h"

class UCommonListView;
class UCommonTextBlock;
class UFortCreativeGlobalOptions;
class UFortCreativeOption;
class UFortMatchmakingKnobsSpinnerButton;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortCreativeOptionsCategory : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCreativeOptionCategoryData OptionCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortCreativeOption*> CreativeOptions;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortCreativeGlobalOptions* GlobalOptionsUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonListView* ListView_Options;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_CategoryText;
    
public:
    UFortCreativeOptionsCategory();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSelectionUpdated(UFortMatchmakingKnobsSpinnerButton* CurrentSelection);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCommonListView* GetOptionsList() const;
    
};

