#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EFortGlobalAction.h"
#include "FortGlobalActionDetailsFunctionContext.h"
#include "FortGlobalActionDetailsDataSource.h"
#include "FortStandardGlobalActionDetailsDataSource.generated.h"

class AFortPlayerController;
class UCommonInputSubsystem;
class UFortGlobalUIContext;
class UFortStandardGlobalActionDetailsDataSource;
class UWidget;

UCLASS(Blueprintable)
class UFortStandardGlobalActionDetailsDataSource : public UObject, public IFortGlobalActionDetailsDataSource {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFortNameDataSourceOnChangeInternalDelegate, UObject*, Source);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortGlobalUIContext* GlobalUIContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCommonInputSubsystem* CommonInputSubsystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortPlayerController* FortPlayerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortGlobalActionDetailsFunctionContext ActionDetailsContext;
    
public:
    UFortStandardGlobalActionDetailsDataSource();
    UFUNCTION(BlueprintCallable)
    void SetGlobalUIContext(UFortGlobalUIContext* Value);
    
    UFUNCTION(BlueprintCallable)
    void SetGlobalAction(EFortGlobalAction Value);
    
    UFUNCTION(BlueprintCallable)
    void SetCommonInputSubsystem(UCommonInputSubsystem* Value);
    
    UFUNCTION(BlueprintCallable)
    void SetActionDetailsContext(const FFortGlobalActionDetailsFunctionContext& Value);
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandlePlayerControllerChanged(UObject* Source);
    
public:
    UFUNCTION(BlueprintCallable)
    static UFortStandardGlobalActionDetailsDataSource* ConstructWithDefaultContexts(UObject* Outer, UWidget* ContextWidget, EFortGlobalAction GlobalAction, const FFortGlobalActionDetailsFunctionContext& NewActionDetailsContext);
    
    UFUNCTION(BlueprintCallable)
    static UFortStandardGlobalActionDetailsDataSource* Construct(UObject* Outer, UFortGlobalUIContext* NewGlobalUIContext, UCommonInputSubsystem* NewCommonInputSubsystem, EFortGlobalAction GlobalAction, const FFortGlobalActionDetailsFunctionContext& NewActionDetailsContext);
    
    
    // Fix for true pure virtual functions not being implemented
};

