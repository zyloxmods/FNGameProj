#pragma once
#include "CoreMinimal.h"
#include "FortItemPreviewScreen.h"
#include "Templates/SubclassOf.h"
#include "FortWinterQuestDetailsScreen.generated.h"

class AFortItemPreviewSceneChanger;
class UAthenaRewardItemTypeRarityTag;
class UCommonButton;
class UCommonButtonGroup;
class UCommonTextBlock;
class UDynamicEntryBox;
class UFortItem;
class UFortWinterQuestDetailsEntry;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortWinterQuestDetailsScreen : public UFortItemPreviewScreen {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SceneChangerTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortWinterQuestDetailsEntry> ItemCardClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortItem* CurrentlySelectedItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_Back;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaRewardItemTypeRarityTag* AthenaRewardItemTypeRarityTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_ItemName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_ItemSetDetails;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_ItemDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDynamicEntryBox* EntryBox_Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCommonButtonGroup* EntryBoxButtonGroup;
    
public:
    UFortWinterQuestDetailsScreen();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetRewardsSceneChanger(AFortItemPreviewSceneChanger* ItemPreviewSceneChanger);
    
};

