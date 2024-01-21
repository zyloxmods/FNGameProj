#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "FortCollectionBookSlotView.generated.h"

class UCommonButton;
class UCommonButtonGroup;
class UFortCollectionBookSection;
class UFortCollectionBookSlotButton;
class UHorizontalBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortCollectionBookSlotView : public UCommonUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UFortCollectionBookSlotButton> CollectionBookButtonClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* CollectionBookButtonBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCommonButtonGroup* CollectionBookSlotButtonGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFortCollectionBookSlotButton*> CollectionBookSlotButtons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortCollectionBookSection* AssociatedSection;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PreviousSelectedButtonIdx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentSelectedButtonIdx;
    
public:
    UFortCollectionBookSlotView();
protected:
    UFUNCTION(BlueprintCallable)
    void OnSlotButtonHovered(UCommonButton* HoveredButton, int32 ButtonIdx);
    
    UFUNCTION(BlueprintCallable)
    void OnSlotButtonClicked(UCommonButton* ClickedButton, int32 ButtonIdx);
    
    UFUNCTION(BlueprintCallable)
    void OnSelectedSlotButtonChanged(UCommonButton* SelectedButton, int32 ButtonIdx);
    
};

