#pragma once
#include "CoreMinimal.h"
#include "Layout/Margin.h"
#include "Styling/SlateBrush.h"
#include "Components/ContentWidget.h"
#include "EGridSortKind.h"
#include "GetSortKeyForDelegate.h"
#include "GridPickerTileEventDelegate.h"
#include "Templates/SubclassOf.h"
#include "FortGridWidgetBase.generated.h"

class UFortGridPickerTile;
class UObject;

UCLASS(Abstract, Blueprintable)
class UFortGridWidgetBase : public UContentWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortGridPickerTile> ClearWidgetType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TileWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TileHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TilesAcross;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TilesDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShrinkToFit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PeekOverflowTilePercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin TilePadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush GridBackground;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin GridBackgroundPadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> DataProvider;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGridPickerTileEvent OnTileGenerated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGridPickerTileEvent OnTileClicked;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGridPickerTileEvent OnMouseEnterTile;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGridPickerTileEvent OnMouseLeaveTile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortGridPickerTile> TileWidgetType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGridSortKind SortKind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReversed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetSortKeyFor GetSortKeyFor;
    
    UFortGridWidgetBase();
    UFUNCTION(BlueprintCallable)
    void SetTileWidth(float Width);
    
    UFUNCTION(BlueprintCallable)
    void SetTilesDown(int32 Down);
    
    UFUNCTION(BlueprintCallable)
    void SetTilesAcross(int32 Across);
    
    UFUNCTION(BlueprintCallable)
    void SetTilePadding(FMargin Padding);
    
    UFUNCTION(BlueprintCallable)
    void SetTileHeight(float Height);
    
    UFUNCTION(BlueprintCallable)
    void SetPeekOverflowTilePercentage(float Percent);
    
    UFUNCTION(BlueprintCallable)
    void SetDataProvider(const TArray<UObject*>& Data);
    
    UFUNCTION(BlueprintCallable)
    void SetClearWidgetType(TSubclassOf<UFortGridPickerTile> InClearWidgetType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UFortGridPickerTile*> GetTiles();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortGridPickerTile* GetTileForObject(const UObject* Object);
    
};

