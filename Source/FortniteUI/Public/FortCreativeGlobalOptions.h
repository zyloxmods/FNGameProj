#pragma once
#include "CoreMinimal.h"
#include "UFortMatchmakingKnobsDataSource.h"
#include "FortActivatablePanel.h"
#include "FortCreativeGlobalOptions.generated.h"

class UCommonButton;
class UCommonListView;
class UFortCreativeOptionsBundle;
class UFortMatchmakingKnobsSpinnerButton;
class UImage;
class UObject;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortCreativeGlobalOptions : public UFortActivatablePanel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortCreativeOptionsBundle* OptionsAsset;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonListView* OptionsList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* AcceptButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* CancelButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_DisplayImage;
    
    UFortCreativeGlobalOptions();
    UFUNCTION(BlueprintCallable)
    void SetListDataSource(TEnumAsByte<UFortMatchmakingKnobsDataSource::Type> ListType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSelectionUpdated(UFortMatchmakingKnobsSpinnerButton* CurrentSelection);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnHoveredItemChanged(UObject* Item, bool bIsHovered);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnCurrentItemSelectionChanged(UObject* Item);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleNoOptionsLoaded();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleCancelClicked();
    
};

