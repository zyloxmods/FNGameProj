#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AttributeSet.h"
#include "GameplayTagContainer.h"
#include "GameStateComponent.h"
#include "Styling/SlateBrush.h"
#include "Templates/SubclassOf.h"
#include "FortAthenaLivingWorldManager.generated.h"

class AActor;
class AFortAthenaPatrolPath;
class AFortGameStateAthena;
class UFortAthenaAISpawnerData;
class UFortAthenaLivingWorldConfigData;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortAthenaLivingWorldManager : public UGameStateComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortAthenaLivingWorldConfigData> LagerConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat LagerEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> PointProviders;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush SpecialActorMinimapIconBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D SpecialActorMinimapIconScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush SpecialActorCompassIconBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D SpecialActorCompassIconScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UFortAthenaAISpawnerData>> LoadedSpawnerDataClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortGameStateAthena* CachedGameState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> RuntimePointProviderList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<AActor*> RuntimePointProviderOwners;
    
public:
    UFortAthenaLivingWorldManager();
private:
    UFUNCTION(BlueprintCallable)
    void OnSpawnedActorDestroy(AActor* DestroyedActor);
    
    UFUNCTION(BlueprintCallable)
    void OnPatrolPathAdded(AFortAthenaPatrolPath* PatrolPath);
    
    UFUNCTION(BlueprintCallable)
    void OnCurrentPlaylistLoaded(FName PlaylistName, const FGameplayTagContainer& PlaylistContextTags);
    
public:
    UFUNCTION(BlueprintCallable)
    static void LivingWorldManagerUnregisterPointProvider(AActor* PointProvider);
    
    UFUNCTION(BlueprintCallable, Exec)
    void LivingWorldManagerToggleVerboseLogging();
    
    UFUNCTION(BlueprintCallable, Exec)
    void LivingWorldManagerToggleGenerateEvents();
    
    UFUNCTION(BlueprintCallable, Exec)
    void LivingWorldManagerToggleActorMinimap();
    
    UFUNCTION(BlueprintCallable)
    static void LivingWorldManagerRegisterPointProvider(AActor* PointProvider);
    
    UFUNCTION(BlueprintCallable, Exec)
    void LivingWorldManagerProviderDebugActor(int32 ProviderIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void LivingWorldManagerGenerateEvents();
    
    UFUNCTION(BlueprintCallable, Exec)
    void LivingWorldManagerFlush();
    
};

