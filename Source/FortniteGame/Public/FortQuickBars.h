#pragma once
#include "CoreMinimal.h"
#include "FortClientOnlyActor.h"
#include "QuickBar.h"
#include "FortQuickBars.generated.h"

class UFortWorldItem;

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortQuickBars : public AFortClientOnlyActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuickBar PrimaryQuickBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuickBar SecondaryQuickBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuickBar CreativeQuickBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFortWorldItem*> AllCachedTraps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFortWorldItem*> CachedFloorTraps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFortWorldItem*> CachedWallTraps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFortWorldItem*> CachedCeilingTraps;
    
public:
    AFortQuickBars();
};

