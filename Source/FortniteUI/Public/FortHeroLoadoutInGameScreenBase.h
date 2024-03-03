#pragma once
#include "CoreMinimal.h"
#include "CommonActivatablePanel.h"
#include "FortInGamePerkDisplayData.h"
#include "Templates/SubclassOf.h"
#include "FortHeroLoadoutInGameScreenBase.generated.h"

class UFortGadgetItemDefinition;
class UFortHeroLoadoutGadgetTileBase;
class UFortHeroLoadoutPerkTileBase;
class UFortItemDetailsHostPanel;
class UGridPanel;
class UGridSlot;
class UScrollBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortHeroLoadoutInGameScreenBase : public UCommonActivatablePanel {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortInGamePerkDisplayData> PerksDisplayData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortHeroLoadoutPerkTileBase> TileClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* ScrollBox_Content;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortItemDetailsHostPanel* ItemDetailsHostPanel_Header;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGridPanel* GridPanel_Perks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortHeroLoadoutGadgetTileBase* GadgetTile_Gadget1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortHeroLoadoutGadgetTileBase* GadgetTile_Gadget2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFortHeroLoadoutGadgetTileBase*> GadgetTiles;
    
public:
    UFortHeroLoadoutInGameScreenBase();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPerkWidgetAdded(UGridSlot* GridSlot);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortGadgetItemDefinition* GetGadgetDefinitionBySlot(int32 SlotIndex) const;
    
};

