#pragma once
#include "CoreMinimal.h"
#include "FortItemQuantityPair.h"
#include "FortPersistableItem.h"
#include "FortAccountItem.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortAccountItem : public UFortPersistableItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 XP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 item_seen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 favorite;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 max_level_bonus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString inventory_overflow_date;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPendingBeingMarkedAsSeen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNeedsResolveMarkedAsSeen;
    
public:
    UFortAccountItem();
    UFUNCTION(BlueprintCallable)
    void MarkItemAsSeenBP();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRefundable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFavorite() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasBeenSeenLocally() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FFortItemQuantityPair> GetRefundResults() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FFortItemQuantityPair> GetRecyclingRefunds() const;
    
};

