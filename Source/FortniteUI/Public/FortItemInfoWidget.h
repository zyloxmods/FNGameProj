#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "FortItemInfoWidget.generated.h"

class UCommonTextBlock;
class UFortItem;
class UFortItemDefinition;
class UOverlay;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortItemInfoWidget : public UCommonUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_ItemType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_Desc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* Overlay_MainView;
    
public:
    UFortItemInfoWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetRarityMaterialValues(UFortItemDefinition* ItemDefinition);
    
    UFUNCTION(BlueprintCallable)
    void PopulateUsingItemDefinition(UFortItemDefinition* NewItem);
    
    UFUNCTION(BlueprintCallable)
    void PopulateUsingItem(UFortItem* NewItem);
    
};

