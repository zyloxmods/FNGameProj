#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EFortInventoryType.h"
#include "FortInventoryInterface.h"
#include "FortItemList.h"
#include "FortInventory.generated.h"

class AFortPawn;
class UFortItem;
class UFortWorldItem;

UCLASS(Blueprintable, MinimalAPI)
class AFortInventory : public AActor, public IFortInventoryInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EFortInventoryType::Type> InventoryType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=HandleInventoryLocalUpdate, meta=(AllowPrivateAccess=true))
    FFortItemList Inventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AFortPawn* ReplayPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRequiresLocalUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRequiresSaving;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsShuttingDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortWorldItem*> PendingInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortItem*> RecentlyAdded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortItem*> RecentlyRemoved;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortItem*> RecentlyChanged;
    
public:
    AFortInventory();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void HandleInventoryLocalUpdate();
    
    
    // Fix for true pure virtual functions not being implemented
};

