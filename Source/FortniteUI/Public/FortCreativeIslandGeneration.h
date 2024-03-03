#pragma once
#include "CoreMinimal.h"
#include "CachedIslandsGroup.h"
#include "FortActivatablePanel.h"
#include "FortCreativeIslandGeneration.generated.h"

class UCommonButton;
class UCommonButtonGroup;
class UCommonTextBlock;
class UCommonTileView;
class UFortCreativeIslandLink;
class UFortCreativeIslandTemplateButton;
class UFortCreativeRealEstatePlotItemDefinition;
class UObject;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortCreativeIslandGeneration : public UFortActivatablePanel {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortCreativeRealEstatePlotItemDefinition*> IslandTemplateDefinitions;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTileView* StartingIslandsTileView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTileView* TemplateIslandsTileView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* AcceptButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* IslandTemplateNameText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* IslandDescriptionText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* PublishedIslandName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* PublishedIslandCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* PublishedIslandAuthor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* PublishedIslandBulletOne;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* PublishedIslandBulletTwo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* PublishedIslandBulletThree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCommonButtonGroup* TabButtonGroup;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCachedIslandsGroup CachedTemplateIslands;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortCreativeIslandLink*> IslandLinks;
    
public:
    UFortCreativeIslandGeneration();
private:
    UFUNCTION(BlueprintCallable)
    void TemplateIslandsOnHoveredItemChanged(UObject* Item, bool bIsHovered);
    
public:
    UFUNCTION(BlueprintCallable)
    void TemplateIslandsOnCurrentItemSelectionChanged(UObject* Item);
    
private:
    UFUNCTION(BlueprintCallable)
    void StartingIslandsOnHoveredItemChanged(UObject* Item, bool bIsHovered);
    
public:
    UFUNCTION(BlueprintCallable)
    void StartingIslandsOnCurrentItemSelectionChanged(UObject* Item);
    
    UFUNCTION(BlueprintCallable)
    void SetupIslandTemplateData();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSelectionUpdated(UFortCreativeIslandTemplateButton* CurrentSelection);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleNoOptionsLoaded();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleCancelClicked();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetShowTemplateIslands();
    
};

