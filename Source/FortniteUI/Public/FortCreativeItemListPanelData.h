#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ItemListCategoryArray.h"
#include "LoadItemsCompleteDelegate.h"
#include "Templates/SubclassOf.h"
#include "FortCreativeItemListPanelData.generated.h"

class UDataTable;
class UFortCreativeItemListPanelData;
class UFortItemDefinition;

UCLASS(Blueprintable)
class UFortCreativeItemListPanelData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFortItemDefinition*> AllItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FItemListCategoryArray> CategoryList;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLoadItemsComplete OnLoadItemsComplete;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ItemListTable;
    
public:
    UFortCreativeItemListPanelData();
    UFUNCTION(BlueprintCallable)
    void LoadItems(UObject* Target);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetInteractionText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UFortCreativeItemListPanelData* GetCreativeItemListPanelData(UObject* Target, TSubclassOf<UFortCreativeItemListPanelData> PanelDataClass, UDataTable* InItemListSource, UDataTable* InItemListCategorySource);
    
};

