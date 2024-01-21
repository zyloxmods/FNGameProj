#pragma once
#include "CoreMinimal.h"
#include "CommonButton.h"
#include "FortItemEntry.h"
#include "Blueprint/IUserObjectListEntry.h"
#include "AthenaCreativeItemTileButton.generated.h"

class UAthenaCreativeItemEntryObjectWrapper;
class UAthenaCreativeItemTileButton;
class UAthenaCreativeItemTileView;
class UFortItemDefinition;
class UObject;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaCreativeItemTileButton : public UCommonButton, public IUserObjectListEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaCreativeItemTileView* ParentView;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortItemDefinition* ItemDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortItemEntry ItemEntry;
    
public:
    UAthenaCreativeItemTileButton();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLoadedItem();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEntryClick(UAthenaCreativeItemTileButton* Entry);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UAthenaCreativeItemEntryObjectWrapper* MakeFortItemEntryObjectWrapper(UObject* Target, UPARAM(Ref) FFortItemEntry& InItemEntry);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetItemTypeCount();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CompareToItemEntry(const FFortItemEntry& InItemEntry);
    
    
    // Fix for true pure virtual functions not being implemented
};

