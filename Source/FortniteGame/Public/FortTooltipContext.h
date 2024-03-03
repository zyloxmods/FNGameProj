#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameFramework/OnlineReplStructs.h"
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "FortTooltipContext.generated.h"

class APlayerController;
class UAbilitySystemComponent;
class UFortRegisteredPlayerInfo;
class UFortTooltipContext;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortTooltipContext : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAbilitySystemComponent* SourceAbilitySystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAbilitySystemComponent* DestAbilitySystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TreatAsLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer TagContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* ComparisonObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortRegisteredPlayerInfo* PlayerInfo;
    
    UFortTooltipContext();
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static UFortTooltipContext* SpawnTooltipContextWithSource_Advanced(const TSubclassOf<UFortTooltipContext>& TooltipContextClass, APlayerController* SourcePlayerController);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static UFortTooltipContext* SpawnTooltipContextWithSource(APlayerController* SourcePlayerController);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, meta=(WorldContext="WorldContextObject"))
    static UFortTooltipContext* SpawnTooltipContextWithNetID_Advanced(const TSubclassOf<UFortTooltipContext>& TooltipContextClass, UObject* WorldContextObject, const FUniqueNetIdRepl& UniqueId);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, meta=(WorldContext="WorldContextObject"))
    static UFortTooltipContext* SpawnTooltipContextWithNetID(UObject* WorldContextObject, const FUniqueNetIdRepl& UniqueId);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static UFortTooltipContext* SpawnTooltipContext_Advanced(const TSubclassOf<UFortTooltipContext>& TooltipContextClass);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static UFortTooltipContext* SpawnTooltipContext();
    
};

